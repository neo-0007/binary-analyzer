
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00760fa0(long *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  long in_FS_OFFSET;
  ushort local_3e;
  ushort local_3c;
  ushort local_3a;
  int local_38;
  undefined4 uStack_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar6 = (byte *)((char *)*param_1 + (*(char *)*param_1 == ','));
  bVar1 = *pbVar6;
  if (bVar1 == 0x4a) {
    pbVar7 = pbVar6 + 1;
    (&DAT_0094aa68)[(long)param_2 * 0xc] = 1;
    if (9 < (int)(char)*pbVar7 - 0x30U) {
      uVar2 = 0;
      goto LAB_007610ad;
    }
LAB_00761004:
    uVar4 = FUN_006e9510(pbVar7,&local_38,10);
    pbVar6 = (byte *)CONCAT44(uStack_34,local_38);
    if (((pbVar6 != pbVar7) && (uVar4 < 0x16e)) &&
       (((&DAT_0094aa68)[(long)param_2 * 0xc] != 1 || (uVar4 != 0)))) {
      (&DAT_0094aa70)[(long)param_2 * 0x18] = (short)uVar4;
LAB_00761057:
      bVar1 = *pbVar6;
      if (bVar1 < 0x30) goto LAB_00761063;
    }
  }
  else {
    if ((int)(char)bVar1 - 0x30U < 10) {
      (&DAT_0094aa68)[(long)param_2 * 0xc] = 0;
      pbVar7 = pbVar6;
      goto LAB_00761004;
    }
    lVar5 = (long)param_2;
    if (bVar1 == 0x4d) {
      (&DAT_0094aa68)[lVar5 * 0xc] = 2;
      iVar3 = FUN_006f4d00(pbVar6,"M%hu.%hu.%hu%n",&DAT_0094aa6c + lVar5 * 0x18,
                           &DAT_0094aa6e + lVar5 * 0x18,&DAT_0094aa70 + lVar5 * 0x18,&local_38);
      if ((((iVar3 != 3) || (0xb < (ushort)((&DAT_0094aa6c)[lVar5 * 0x18] - 1))) ||
          (4 < (ushort)((&DAT_0094aa6e)[lVar5 * 0x18] - 1))) ||
         (6 < (ushort)(&DAT_0094aa70)[lVar5 * 0x18])) goto LAB_00761130;
      pbVar6 = pbVar6 + local_38;
      goto LAB_00761057;
    }
    if (bVar1 != 0) goto LAB_00761130;
    (&DAT_0094aa68)[lVar5 * 0xc] = 2;
    if (lVar5 * 0x30 == 0) {
      _DAT_0094aa6c = 0x20003;
      DAT_0094aa70 = 0;
      goto LAB_00761057;
    }
    *(undefined4 *)(&DAT_0094aa6c + lVar5 * 0x18) = 0x1000b;
    (&DAT_0094aa70)[lVar5 * 0x18] = 0;
    bVar1 = *pbVar6;
    if (0x2f < bVar1) goto LAB_00761130;
LAB_00761063:
    lVar5 = (long)param_2;
    uVar4 = -0x900000000002 >> (bVar1 & 0x3f);
    uVar2 = (uint)uVar4 & 1;
    if ((uVar4 & 1) == 0) {
      if (bVar1 == 0x2f) {
        bVar1 = pbVar6[1];
        if (bVar1 == 0) goto LAB_007610ad;
        local_38 = 0;
        local_3a = 0;
        local_3c = 0;
        local_3e = 2;
        FUN_006f4d00(pbVar6 + (ulong)(bVar1 == 0x2d) + 1,"%hu%n:%hu%n:%hu%n",&local_3e,&local_38,
                     &local_3c,&local_38,&local_3a,&local_38);
        pbVar6 = pbVar6 + (ulong)(bVar1 == 0x2d) + 1 + local_38;
        (&DAT_0094aa74)[lVar5 * 0xc] =
             ((uint)local_3e * 0xe10 + (uint)local_3c * 0x3c + (uint)local_3a) *
             (((bVar1 != 0x2d) - 1) + (uint)(bVar1 != 0x2d));
      }
      else {
        (&DAT_0094aa74)[lVar5 * 0xc] = 0x1c20;
      }
      (&DAT_0094aa88)[lVar5 * 0xc] = 0xffffffff;
      uVar2 = 1;
      *param_1 = (long)pbVar6;
      goto LAB_007610ad;
    }
  }
LAB_00761130:
  uVar2 = 0;
LAB_007610ad:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

