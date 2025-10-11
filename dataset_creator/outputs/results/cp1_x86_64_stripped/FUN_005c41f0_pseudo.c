
ulong FUN_005c41f0(undefined8 param_1,undefined4 param_2,long param_3,int param_4,undefined8 param_5
                  )

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = FUN_004b75a0();
  iVar1 = FUN_004b7840(param_1,uVar4);
  if (iVar1 < 1) {
    uVar6 = 0;
  }
  else {
    iVar1 = FUN_004b7d40(param_1);
    if (iVar1 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = 2;
LAB_005c42e9:
        uVar6 = FUN_004b7cf0(param_1,uVar8);
        return uVar6;
      }
      goto LAB_005c4400;
    }
    iVar1 = FUN_004b7cf0(param_1,3);
    if (iVar1 == 0) {
      if (param_4 == 0) {
LAB_005c425d:
        lVar5 = 0;
        if ((param_3 == 0) && (param_3 = FUN_004b2b10(), lVar5 = param_3, param_3 == 0)) {
          lVar5 = 0;
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = FUN_005c3c30(param_1,param_2,param_3,param_5,0,&local_44);
          if (uVar2 != 0) {
            uVar2 = (uint)(local_44 == 3);
          }
        }
        FUN_004b2b50(lVar5);
        uVar6 = (ulong)uVar2;
      }
      else {
        iVar3 = FUN_004b7bb0(param_1);
        iVar1 = 0x40;
        if (((0x200 < iVar3) && (iVar1 = 0x80, 0x400 < iVar3)) && (iVar1 = 0x180, 0x800 < iVar3)) {
          iVar1 = 0x800;
          if (iVar3 < 0x1001) {
            iVar1 = 0x400;
          }
        }
        puVar7 = &DAT_00814b04;
        uVar8 = 3;
        while (lVar5 = FUN_004bca90(param_1,uVar8), lVar5 != -1) {
          if (lVar5 == 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_005c42e9;
            goto LAB_005c4400;
          }
          if (puVar7 == &DAT_00814b04 + (iVar1 - 2)) {
            iVar1 = FUN_005c3bd0(param_5,1,0xffffffff);
            if (iVar1 != 0) goto LAB_005c425d;
            break;
          }
          uVar8 = *puVar7;
          puVar7 = puVar7 + 1;
        }
        uVar6 = 0xffffffff;
      }
    }
    else {
      uVar6 = 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_005c4400:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

