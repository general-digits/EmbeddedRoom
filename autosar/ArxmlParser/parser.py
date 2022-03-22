import os
from lxml import etree

class ParseClass(object):

    def __init__(self,fileName):
        self.fileName = fileName

    def extractData(self):

        abs_path = os.path.abspath(os.path.dirname(__file__))
        arxmlFile = os.path.join(abs_path,'input/' + self.fileName)
        tree = etree.parse(arxmlFile)

        dataExpre1 = "//*[local-name() = 'ECUC-MODULE-CONFIGURATION-VALUES']/*[local-name() = 'SHORT-NAME']/text()"
        data1 = tree.xpath(dataExpre1)

        dataExpre2 = "//*[local-name() = 'ECUC-MODULE-CONFIGURATION-VALUES']/*[local-name() = 'MODULE-DESCRIPTION-REF']/text()"
        data2 = tree.xpath(dataExpre2)

        totalEpres = "count(//*[local-name() = 'ECUC-MODULE-CONFIGURATION-VALUES'])"
        total = tree.xpath(totalEpres)

        return list(zip(data1,data2))

dataObj = ParseClass('ECU.arxml')
data = dataObj.extractData()

print(data)

