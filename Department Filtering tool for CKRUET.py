# Author  : InferiorAK
# TooL    : Department Filtering tool for CKRUET
# Created : 3 Oct 2024

from pypdf import PdfReader
import os
import sys

class Department:
    def __init__(self, pdf: str, department: str, university: str) -> str:
        self.pdf = pdf
        self.dept = department.upper()
        self.uni = university.upper()

    def __extract(self):
        file = "extracted.txt"
        pdf = PdfReader(self.pdf)
        pages = pdf.pages
        for page in pages:
            with open(file, "a") as f:
                f.write(page.extract_text())

    def filter(self):
        self.__extract()
        file = "extracted.txt"
        with open(file, "r") as f:
            i = 1
            for line in f:
                if (line := line.strip()).endswith(f"{self.dept}-{self.uni}"):
                    nline = line.split(" ")
                    print(f"{i:03d}. {" ".join(nline[2:len(nline)-1])}")
                    sys.stdout.flush()
                    i += 1
                else:
                    pass
            f.close()
        os.remove(file)


if __name__ == "__main__":
    pdf = "27_sep_ka.pdf"
    dept = "me"
    uni = "kuet"
    
    get = Department(pdf, dept, uni)
    get.filter()
