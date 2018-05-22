import numpy as np
import matplotlib
import csv
import scipy as sp
import sys
import os
import parser
import pdb
import pandas as pd
import argparse
from matplotlib import pyplot as plt
from matplotlib.ticker import FuncFormatter
datapath = '../dataset'

def vandermonde(oneDarray, power):
    numval = len(oneDarray)
    vandermonde = np.zeros([power, numval])
    for k in range(power):
        vandermonde[:,k] = oneDarray**k
    return vandermonde

def norm(vec, p =2.):
    norm = (np.sum(np.abs(vec)**p))**(1/p)
    return norm

def normalize(vec, p =2.):
    vec = vec/ norm(vec, p =p)
    return vec

def mmt(prob, vals):
    V = vandermonde(vals, len(prob))
    mmt = np.dot(V.transpose(), prob)
    return mmt

def cumulate(deltavals):
    outarray = np.zeros(len(deltavals)+1)
    sumval  = 0
    for k in range(1,len(outarray)):
        sumval +=deltavals[k-1]
        outarray[k] = sumval
    return outarray

def takedelta(vals):
    length = len(vals)
    valshift1 = vals[1:length]
    valshift0 = vals[0:length-1]
    valdelta = np.abs(valshift1 - valshift0)
    return valdelta


def loaddat(filename, extention = '.csv'):
    filepath = os.path.join(datapath , filename+extention)
    df = pd.read_csv(filepath,  header = None)
    dataset = df
    data =  dataset.values
    return data
