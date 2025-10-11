
int ASN1_object_size(int constructed,int length,int tag)

{
  int iVar1;
  int iVar2;
  
  if (-1 < length) {
    iVar2 = 1;
    iVar1 = iVar2;
    if (0x1e < tag) {
      do {
        iVar1 = iVar2 + 1;
        if (tag >> 7 == 0) break;
        iVar2 = iVar2 + 2;
        tag = tag >> 0xe;
        iVar1 = iVar2;
      } while (tag != 0);
    }
    if (constructed == 2) {
      iVar1 = iVar1 + 3;
    }
    else {
      iVar1 = iVar1 + 1;
      iVar2 = length;
      if (0x7f < length) {
        do {
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 >> 8;
        } while (iVar2 != 0);
      }
    }
    if (iVar1 < 0x7fffffff - length) {
      return iVar1 + length;
    }
  }
  return -1;
}

