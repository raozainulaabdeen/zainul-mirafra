import csv
import json

json_reader = None

def con_json_to_csv(csv_file_path, json_file_path):
    global json_reader
    with open(json_file_path, "r") as json_file:
        json_reader = json.load(json_file)

    with open(csv_file_path, "w") as csv_file:
        csv_writer = csv.DictWriter(csv_file, json_reader[0].keys())
        csv_writer.writeheader()
        csv_writer.writerows(json_reader)


con_json_to_csv("dat1.csv", "dat.json")
