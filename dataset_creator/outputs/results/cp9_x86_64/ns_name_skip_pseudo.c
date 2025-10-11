
int ns_name_skip(u_char **param_1,u_char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  long in_FS_OFFSET;
  
  pbVar3 = *param_1;
  if (pbVar3 < param_2) {
    while( true ) {
      bVar2 = *pbVar3;
      pbVar1 = pbVar3 + 1;
      if (bVar2 == 0) {
        *param_1 = pbVar1;
        return 0;
      }
      if ((bVar2 & 0xc0) != 0) break;
      if (((long)param_2 - (long)pbVar1 < (long)(ulong)bVar2) ||
         (pbVar3 = pbVar1 + bVar2, param_2 <= pbVar3)) goto LAB_007bed49;
    }
    if (((bVar2 & 0xc0) == 0xc0) && (param_2 != pbVar1)) {
      *param_1 = pbVar3 + 2;
      return 0;
    }
  }
LAB_007bed49:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x5a;
  return -1;
}

