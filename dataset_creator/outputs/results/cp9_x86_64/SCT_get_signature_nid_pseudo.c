
int SCT_get_signature_nid(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    return 0;
  }
  if ((char)param_1[0x10] != '\x04') {
    return *param_1;
  }
  if (*(char *)((long)param_1 + 0x41) != '\x01') {
    iVar1 = 0;
    if (*(char *)((long)param_1 + 0x41) == '\x03') {
      iVar1 = 0x31a;
    }
    return iVar1;
  }
  return 0x29c;
}

