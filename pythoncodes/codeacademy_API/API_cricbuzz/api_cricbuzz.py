import requests
import xml.etree.ElementTree as ET 


def get_url(url):
	response=requests.get(url)
	head=response.headers
	data=response.text
	return data


def matches_today(xml_data):
	root=ET.fromstring(xml_data)
	#print "Number of Matches held today are " + root.attrib['NMchs']
	print "Matches which are going now or completed recently"
	for child in root:
		if(child.tag=="match"):
			print child.attrib['mchDesc']+" <======  ID  OF   THE   MATCH  =====>  " + child.attrib['id']
	return root


def match_watch(get_root,match_id):
	root=get_root
	Id=match_id
	#print Id
	#print type(Id)
	if (int(Id)<10000):
		for child in root:
			if (child.tag=="match"):
				if(child.attrib['id']==Id):
					return child
	else:
		print "Number which is less than 10000"
		Id=raw_input("Select the Match ID once again from above Description - ")
		return match_watch(root,Id)
		#This is to be done later



url="http://synd.cricbuzz.com/j2me/1.0/livematches.xml"
xml_data=get_url(url)
got_root=matches_today(xml_data)
match_id=raw_input("Select the Match ID from above Description - ")
second_root=match_watch(got_root,match_id)
print second_root.attrib['id']


