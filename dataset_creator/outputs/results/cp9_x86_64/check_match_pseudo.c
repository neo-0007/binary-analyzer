
uint * check_match(char *param_1,uint *param_2,undefined8 *param_3,uint param_4,byte param_5,
                  uint *param_6,uint param_7,long param_8,long param_9,undefined8 *param_10,
                  int *param_11)

{
  undefined8 *puVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  bVar6 = (byte)param_6[1] & 0xf;
  if (((((*(long *)(param_6 + 2) == 0) && (bVar6 != 6)) && (*(short *)((long)param_6 + 6) != -0xf))
      || ((*(short *)((long)param_6 + 6) == 0 & param_5) != 0 || (-0x468 >> bVar6 & 1U) != 0)) ||
     ((param_6 != param_2 &&
      (iVar4 = strcmp((char *)((ulong)*param_6 + param_8),param_1), iVar4 != 0)))) {
    return (uint *)0x0;
  }
  lVar3 = *(long *)(param_9 + 0x348);
  if (param_3 == (undefined8 *)0x0) {
    if ((lVar3 != 0) &&
       (uVar2 = *(ushort *)(lVar3 + (ulong)param_7 * 2),
       (ushort)(((param_4 & 2) == 0) + 2) <= (uVar2 & 0x7fff))) {
      if ((short)uVar2 < 0) {
        return (uint *)0x0;
      }
      iVar4 = *param_11;
      *param_11 = iVar4 + 1;
      if (iVar4 != 0) {
        return (uint *)0x0;
      }
      *param_10 = param_6;
      return (uint *)0x0;
    }
  }
  else if (lVar3 == 0) {
    if ((param_3[2] != 0) && (iVar4 = _dl_name_match_p(param_3[2],param_9), iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("version->filename == NULL || ! _dl_name_match_p (version->filename, map)",
                    "dl-lookup.c",0x6a,"check_match");
    }
  }
  else {
    uVar2 = *(ushort *)(lVar3 + (ulong)param_7 * 2);
    puVar1 = (undefined8 *)(*(long *)(param_9 + 0x2e8) + (ulong)(uVar2 & 0x7fff) * 0x18);
    iVar4 = *(int *)(puVar1 + 1);
    if ((iVar4 != *(int *)(param_3 + 1)) ||
       (iVar5 = strcmp((char *)*puVar1,(char *)*param_3), iVar5 != 0)) {
      if (iVar4 != 0 || *(int *)((long)param_3 + 0xc) != 0) {
        return (uint *)0x0;
      }
      if ((short)uVar2 < 0) {
        return (uint *)0x0;
      }
    }
  }
  return param_6;
}

