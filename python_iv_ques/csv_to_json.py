import csv
import json


def con_csv_to_json(csv_file_path, json_file_path):
    with open(csv_file_path, "r") as csv_file:
        csv_reader = csv.DictReader(csv_file)
        data = [row for row in csv_reader]

    with open(json_file_path, "w") as json_file:
        json.dump(data, json_file, indent = 4)

con_csv_to_json("dat.csv", "dat.json")
