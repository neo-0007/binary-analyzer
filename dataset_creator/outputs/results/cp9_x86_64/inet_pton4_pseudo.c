
undefined8 inet_pton4(char *param_1,char *param_2,uint *param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = local_14 & 0xffffff00;
  if (param_1 < param_2) {
    pbVar6 = (byte *)&local_14;
    iVar7 = 0;
    bVar3 = false;
    do {
      while( true ) {
        cVar2 = *param_1;
        param_1 = param_1 + 1;
        uVar5 = (int)cVar2 - 0x30;
        if (uVar5 < 10) break;
        if ((!(bool)(cVar2 == 0x2e & bVar3)) || (iVar7 == 4)) goto LAB_0076d8e0;
        pbVar6[1] = 0;
        bVar3 = false;
        pbVar6 = pbVar6 + 1;
        if (param_2 == param_1) goto LAB_0076d8ad;
      }
      bVar1 = *pbVar6;
      uVar5 = uVar5 + ((uint)bVar1 + (uint)bVar1 * 4) * 2;
      if (bVar3) {
        if ((0xff < uVar5) || (bVar1 == 0)) goto LAB_0076d8e0;
        *pbVar6 = (byte)uVar5;
      }
      else {
        if (0xff < uVar5) goto LAB_0076d8e0;
        iVar7 = iVar7 + 1;
        *pbVar6 = (byte)uVar5;
        if (4 < iVar7) goto LAB_0076d8e0;
        bVar3 = true;
      }
    } while (param_2 != param_1);
LAB_0076d8ad:
    if (3 < iVar7) {
      *param_3 = local_14;
      uVar4 = 1;
      goto LAB_0076d8e2;
    }
  }
LAB_0076d8e0:
  uVar4 = 0;
LAB_0076d8e2:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

