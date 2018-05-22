import numpy as np
import matplotlib
import csv
import scipy as sp
import sys
import os
import parser
import pdb
import argparse
from matplotlib import pyplot as plt
from matplotlib.ticker import FuncFormatter
import util as util

datapath = './dataset/'

def main():

    parser = argparse.ArgumentParser(description='Dataset for Homework ')
    parser.add_argument('--idx', '-i', type=str, default=0,
                        help='lecture or homework number')
    args = parser.parse_args()
    np.set_printoptions(suppress=True)

    if args.idx == '1':
        np.random.seed(1)
        true_covariance = np.array([[1,2,3], [4,5,6], [0,6,2]])
        #true_covariance = np.array([[1,2], [4,5]])
        data = np.dot(true_covariance, np.random.normal(size=(3, 5000)))
        filepath = os.path.join(datapath, "data%s%s.csv"%(args.idx,0))
        np.savetxt(filepath, data, delimiter=",")
        print filepath + ' saved.'



def to_percent(y, position):
    # Ignore the passed in position. This has the effect of scaling the default
    # tick locations.
    s = str(y*100)

    # The percent symbol needs escaping in latex
    if matplotlib.rcParams['text.usetex'] is True:
        return s + r'$\%$'
    else:
        return s + '%'


def profitFunc(Z, m= 1., a= 0.1, b= 2):
    val = m +  a*np.sqrt(Z) +  b* 1./(1. + np.exp(Z))
    return val

def profitModel(Z, m= 1., a= 0.1, b= 2, sig= 5):
    noise = np.random.normal(0,sig, size = len(Z))
    val  = noise + profitFunc(Z, m, a,b)
    return val

if __name__ =='__main__':
    main()
    os.system("open -a Finder %s"%datapath)
