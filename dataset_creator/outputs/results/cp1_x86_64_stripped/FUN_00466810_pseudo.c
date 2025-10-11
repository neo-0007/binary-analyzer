
int FUN_00466810(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                undefined8 param_5,long param_6,ulong param_7)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined1 local_89;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0040ac10();
  if (0 < iVar1) {
    uVar6 = (ulong)iVar1;
    uVar7 = (ulong)(param_7 % uVar6 == 0);
    uVar8 = param_7 / uVar6 + 1;
    uVar3 = uVar8 - uVar7;
    if (((uVar3 < 0x100) && (param_6 != 0)) && (lVar4 = FUN_00545280(), lVar4 != 0)) {
      iVar1 = FUN_00544dc0(lVar4,param_2,param_3,param_1,0);
      if (iVar1 != 0) {
        if (uVar8 == uVar7) {
LAB_00466a10:
          iVar1 = 1;
        }
        else {
          local_89 = 1;
          uVar8 = 1;
          uVar7 = 0;
          while (((iVar1 = FUN_00545040(lVar4,param_4,param_5), iVar1 != 0 &&
                  (iVar1 = FUN_00545040(lVar4,&local_89,1), iVar1 != 0)) &&
                 (iVar1 = FUN_00545060(lVar4,local_88,0), iVar1 != 0))) {
            uVar5 = uVar6;
            uVar9 = uVar6 + uVar7;
            if (param_7 < uVar6 + uVar7) {
              uVar5 = param_7 - uVar7;
              uVar9 = param_7;
            }
            thunk_FUN_00713a50(param_6 + uVar7,local_88,uVar5);
            uVar2 = (int)uVar8 + 1;
            uVar8 = (ulong)uVar2;
            if (uVar3 < uVar8) goto LAB_00466a10;
            local_89 = (undefined1)uVar2;
            uVar7 = uVar9;
            if ((1 < uVar2) &&
               ((iVar1 = FUN_00544dc0(lVar4,0,0,0,0), iVar1 == 0 ||
                (iVar1 = FUN_00545040(lVar4,local_88,uVar6), iVar1 == 0)))) break;
          }
          iVar1 = 0;
        }
      }
      FUN_004227b0(local_88,0x40);
      FUN_00545130(lVar4);
      goto LAB_004669e2;
    }
  }
  iVar1 = 0;
LAB_004669e2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar1;
}

