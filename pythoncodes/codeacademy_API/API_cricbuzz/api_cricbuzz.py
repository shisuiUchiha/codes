import requests
import xml.etree.ElementTree as ET 


response=requests.get('http://synd.cricbuzz.com/j2me/1.0/livematches.xml')

head=response.headers

data=response.text

print data

root=ET.fromstring(data)





for child in root:
	print child.tag
	d={}
	d=child.attrib
	print d
	for keys in child.attrib:
		if (child.attrib[keys]=="BANW vs RSAW"):
			for childs in child:
				if (childs.tag=="state"):
					for things in childs.attrib:
						if(things=="status"):
							print childs.attrib[things]


