
int X509v3_addr_get_range(uint *param_1,int param_2,long param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    iVar2 = 4;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    iVar2 = 0x10;
  }
  if ((((param_1 == (uint *)0x0) || (param_3 == 0)) || (param_4 == 0)) ||
     (((param_5 < iVar2 || (1 < *param_1)) || (iVar1 = extract_min_max(), iVar1 == 0)))) {
    iVar2 = 0;
  }
  return iVar2;
}

