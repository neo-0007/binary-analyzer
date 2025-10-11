
byte * arg_trimdomain_list(undefined8 param_1,ulong param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  size_t __n;
  byte *pbVar8;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (ulong)*param_3;
  if (*param_3 == 0) goto LAB_0076df2f;
LAB_0076de40:
  pbVar8 = param_3;
  do {
    cVar3 = (char)uVar6;
    if (((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar3 * 2) & 0x20) != 0) ||
       (cVar3 == '#' || cVar3 == ',')) break;
    pbVar1 = pbVar8 + 1;
    uVar6 = (ulong)*pbVar1;
    pbVar8 = pbVar8 + 1;
  } while (*pbVar1 != 0);
  __n = (long)pbVar8 - (long)param_3;
  do {
    if (3 < (int)_res_hconf._24_4_) {
      pcVar5 = (char *)dcgettext(&_libc_intl_domainname,
                                 "%s: line %d: cannot specify more than %d trim domains",5);
      iVar4 = asprintf(&local_38,pcVar5,param_1,param_2 & 0xffffffff,4);
joined_r0x0076df77:
      if (-1 < iVar4) {
        __fxprintf(0,&DAT_007d9761,local_38);
        free(local_38);
      }
      param_3 = (byte *)0x0;
LAB_0076df7c:
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      return param_3;
    }
    lVar7 = (long)(int)_res_hconf._24_4_;
    _res_hconf._24_4_ = _res_hconf._24_4_ + 1;
    pcVar5 = strndup((char *)param_3,__n);
    *(char **)(_res_hconf + lVar7 * 8 + 0x20) = pcVar5;
    uVar6 = (ulong)(char)*pbVar8;
    lVar7 = *(long *)(in_FS_OFFSET + -0x40);
    bVar2 = *(byte *)(lVar7 + 1 + uVar6 * 2);
    param_3 = pbVar8;
    while ((bVar2 & 0x20) != 0) {
      uVar6 = (ulong)(char)param_3[1];
      param_3 = param_3 + 1;
      bVar2 = *(byte *)(lVar7 + 1 + uVar6 * 2);
    }
    cVar3 = (char)uVar6;
    if ((cVar3 == ',') || ((byte)(cVar3 - 0x3aU) < 2)) {
      uVar6 = (ulong)(char)param_3[1];
      bVar2 = *(byte *)(lVar7 + 1 + uVar6 * 2);
      pbVar8 = param_3;
      while (param_3 = pbVar8 + 1, (bVar2 & 0x20) != 0) {
        uVar6 = (ulong)(char)pbVar8[2];
        pbVar8 = param_3;
        bVar2 = *(byte *)(lVar7 + 1 + uVar6 * 2);
      }
      if (((char)uVar6 == '\0') || ((char)uVar6 == '#')) {
        pcVar5 = (char *)dcgettext(&_libc_intl_domainname,
                                   "%s: line %d: list delimiter not followed by domain",5);
        iVar4 = asprintf(&local_38,pcVar5,param_1,param_2 & 0xffffffff);
        goto joined_r0x0076df77;
      }
    }
    else if ((cVar3 == '\0') || (cVar3 == '#')) goto LAB_0076df7c;
    if ((char)uVar6 != '\0') goto LAB_0076de40;
LAB_0076df2f:
    __n = 0;
    pbVar8 = param_3;
  } while( true );
}

