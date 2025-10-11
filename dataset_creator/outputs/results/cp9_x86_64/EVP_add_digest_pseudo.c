
int EVP_add_digest(EVP_MD *digest)

{
  int n;
  int iVar1;
  char *name;
  char *pcVar2;
  
  name = OBJ_nid2sn(digest->type);
  iVar1 = OBJ_NAME_add(name,1,(char *)digest);
  if (iVar1 != 0) {
    pcVar2 = OBJ_nid2ln(digest->type);
    iVar1 = OBJ_NAME_add(pcVar2,1,(char *)digest);
    if (iVar1 != 0) {
      n = digest->pkey_type;
      if (n == 0) {
        return iVar1;
      }
      if (n == digest->type) {
        return iVar1;
      }
      pcVar2 = OBJ_nid2sn(n);
      iVar1 = OBJ_NAME_add(pcVar2,0x8001,name);
      if (iVar1 != 0) {
        pcVar2 = OBJ_nid2ln(digest->pkey_type);
        iVar1 = OBJ_NAME_add(pcVar2,0x8001,name);
        return iVar1;
      }
    }
  }
  return 0;
}

