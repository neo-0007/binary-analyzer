
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint parse_rule(long *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uintmax_t uVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  byte *__nptr;
  long in_FS_OFFSET;
  ushort local_3e;
  ushort local_3c;
  ushort local_3a;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar7 = (byte *)((char *)*param_1 + (*(char *)*param_1 == ','));
  bVar1 = *pbVar7;
  if (bVar1 == 0x4a) {
    __nptr = pbVar7 + 1;
    (&DAT_0093da68)[(long)param_2 * 0xc] = 1;
    if (9 < (int)(char)*__nptr - 0x30U) {
      uVar2 = 0;
      goto LAB_007576ad;
    }
LAB_00757604:
    uVar4 = strtouq((char *)__nptr,(char **)&local_38,10);
    pbVar7 = (byte *)CONCAT44(local_38._4_4_,(int)local_38);
    if (((pbVar7 != __nptr) && (uVar4 < 0x16e)) &&
       (((&DAT_0093da68)[(long)param_2 * 0xc] != 1 || (uVar4 != 0)))) {
      (&DAT_0093da70)[(long)param_2 * 0x18] = (short)uVar4;
LAB_00757657:
      bVar1 = *pbVar7;
      if (bVar1 < 0x30) goto LAB_00757663;
    }
  }
  else {
    if ((int)(char)bVar1 - 0x30U < 10) {
      (&DAT_0093da68)[(long)param_2 * 0xc] = 0;
      __nptr = pbVar7;
      goto LAB_00757604;
    }
    lVar6 = (long)param_2;
    if (bVar1 == 0x4d) {
      (&DAT_0093da68)[lVar6 * 0xc] = 2;
      iVar3 = __isoc99_sscanf(pbVar7,"M%hu.%hu.%hu%n",&DAT_0093da6c + lVar6 * 0x18,
                              &DAT_0093da6e + lVar6 * 0x18,&DAT_0093da70 + lVar6 * 0x18,&local_38);
      if ((((iVar3 != 3) || (0xb < (ushort)((&DAT_0093da6c)[lVar6 * 0x18] - 1))) ||
          (4 < (ushort)((&DAT_0093da6e)[lVar6 * 0x18] - 1))) ||
         (6 < (ushort)(&DAT_0093da70)[lVar6 * 0x18])) goto LAB_00757730;
      pbVar7 = pbVar7 + (int)local_38;
      goto LAB_00757657;
    }
    if (bVar1 != 0) goto LAB_00757730;
    (&DAT_0093da68)[lVar6 * 0xc] = 2;
    if (lVar6 * 0x30 == 0) {
      _DAT_0093da6c = 0x20003;
      DAT_0093da70 = 0;
      goto LAB_00757657;
    }
    *(undefined4 *)(&DAT_0093da6c + lVar6 * 0x18) = 0x1000b;
    (&DAT_0093da70)[lVar6 * 0x18] = 0;
    bVar1 = *pbVar7;
    if (0x2f < bVar1) goto LAB_00757730;
LAB_00757663:
    lVar6 = (long)param_2;
    uVar5 = -0x900000000002 >> (bVar1 & 0x3f);
    uVar2 = (uint)uVar5 & 1;
    if ((uVar5 & 1) == 0) {
      if (bVar1 == 0x2f) {
        bVar1 = pbVar7[1];
        if (bVar1 == 0) goto LAB_007576ad;
        local_38._0_4_ = 0;
        local_3a = 0;
        local_3c = 0;
        local_3e = 2;
        __isoc99_sscanf(pbVar7 + (ulong)(bVar1 == 0x2d) + 1,"%hu%n:%hu%n:%hu%n",&local_3e,&local_38,
                        &local_3c,&local_38,&local_3a,&local_38);
        pbVar7 = pbVar7 + (ulong)(bVar1 == 0x2d) + 1 + (int)local_38;
        (&DAT_0093da74)[lVar6 * 0xc] =
             ((uint)local_3e * 0xe10 + (uint)local_3c * 0x3c + (uint)local_3a) *
             (((bVar1 != 0x2d) - 1) + (uint)(bVar1 != 0x2d));
      }
      else {
        (&DAT_0093da74)[lVar6 * 0xc] = 0x1c20;
      }
      (&DAT_0093da88)[lVar6 * 0xc] = 0xffffffff;
      uVar2 = 1;
      *param_1 = (long)pbVar7;
      goto LAB_007576ad;
    }
  }
LAB_00757730:
  uVar2 = 0;
LAB_007576ad:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

