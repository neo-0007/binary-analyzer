
undefined4
FUN_0046b9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,int param_6,long param_7,ulong param_8)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  uint local_8c;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0040ac10();
  uVar5 = (ulong)iVar1;
  uVar2 = 0;
  if (0 < iVar1) {
    lVar3 = FUN_00405f40();
    lVar4 = FUN_00405f40();
    if (((lVar3 != 0) && (lVar4 != 0)) && (iVar1 = FUN_00407400(lVar4,param_1), iVar1 != 0)) {
      uVar6 = 1;
      while( true ) {
        local_8c = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        iVar1 = FUN_004074f0(lVar3,lVar4);
        if (iVar1 == 0) break;
        if (param_6 == 0) {
          iVar1 = FUN_00405f60(lVar3,&local_8c,4);
          if (iVar1 == 0) break;
          iVar1 = FUN_00405f60(lVar3,param_2,param_3);
        }
        else {
          iVar1 = FUN_00405f60(lVar3,param_2,param_3);
          if (iVar1 == 0) break;
          iVar1 = FUN_00405f60(lVar3,&local_8c,4);
        }
        if ((iVar1 == 0) || (iVar1 = FUN_00405f60(lVar3,param_4,param_5), iVar1 == 0)) break;
        if (param_8 < uVar5) {
          iVar1 = FUN_00406090(lVar3,local_88,0);
          if (iVar1 != 0) {
            thunk_FUN_00713a50(param_7,local_88,param_8);
            uVar2 = 1;
            goto LAB_0046bb77;
          }
          break;
        }
        iVar1 = FUN_00406090(lVar3,param_7,0);
        if (iVar1 == 0) break;
        param_7 = param_7 + uVar5;
        param_8 = param_8 - uVar5;
        if (param_8 == 0) {
          uVar2 = 1;
          goto LAB_0046bb77;
        }
        uVar6 = uVar6 + 1;
      }
    }
    uVar2 = 0;
LAB_0046bb77:
    FUN_00406b90(lVar3);
    FUN_00406b90(lVar4);
    FUN_004227b0(local_88,0x40);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

