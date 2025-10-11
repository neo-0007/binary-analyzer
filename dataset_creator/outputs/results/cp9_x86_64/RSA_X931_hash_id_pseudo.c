
int RSA_X931_hash_id(int nid)

{
  int iVar1;
  
  if (nid == 0x2a1) {
    iVar1 = 0x36;
  }
  else {
    if (0x2a1 < nid) {
      iVar1 = -1;
      if (nid == 0x2a2) {
        iVar1 = 0x35;
      }
      return iVar1;
    }
    iVar1 = 0x33;
    if (nid != 0x40) {
      iVar1 = -1;
      if (nid == 0x2a0) {
        iVar1 = 0x34;
      }
      return iVar1;
    }
  }
  return iVar1;
}

