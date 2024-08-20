import subprocess
#import os

#result = os.system("""grep -r "import csv" .""")

result = subprocess.check_output(["grep", "-r", "'import csv'", "."], text = True)

print(result)
