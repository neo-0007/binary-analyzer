
undefined8
FUN_005b63a0(ulong param_1,ushort param_2,undefined1 *param_3,code *param_4,undefined8 param_5)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char local_39;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 >> 0x20 == 0) {
    if (param_1 < 0x10000) {
      if (param_1 < 0x100) {
        local_39 = (char)param_1;
        uVar1 = param_2 & 4;
        if (local_39 < '\0') {
LAB_005b64f0:
          if (uVar1 == 0) {
            if ((param_1 != 0x5c) || ((param_2 & 0x40f) == 0)) goto LAB_005b64fb;
            iVar2 = (*param_4)(param_5,&DAT_0080e728,2);
            if (iVar2 != 0) goto LAB_005b6447;
          }
          else {
            FUN_004aeb30(local_38,0xb,"\\%02X",param_1 & 0xffffffff);
            iVar2 = (*param_4)(param_5,local_38,3);
            if (iVar2 != 0) {
              uVar3 = 3;
              goto LAB_005b6488;
            }
          }
        }
        else {
          uVar1 = *(ushort *)(&DAT_0080e7c0 + (long)(int)param_1 * 2) & param_2;
          if ((uVar1 & 0x61) == 0) {
            uVar1 = uVar1 & 0x406;
            goto LAB_005b64f0;
          }
          if ((uVar1 & 8) == 0) {
            iVar2 = (*param_4)(param_5,&DAT_0080e729,1);
            if ((iVar2 == 0) || (iVar2 = (*param_4)(param_5,&local_39,1), iVar2 == 0))
            goto LAB_005b6598;
LAB_005b6447:
            uVar3 = 2;
            goto LAB_005b6488;
          }
          if (param_3 != (undefined1 *)0x0) {
            *param_3 = 1;
          }
LAB_005b64fb:
          iVar2 = (*param_4)(param_5,&local_39,1);
          if (iVar2 != 0) {
            uVar3 = 1;
            goto LAB_005b6488;
          }
        }
      }
      else {
        FUN_004aeb30(local_38,0x13,&DAT_0080e71a,param_1);
        iVar2 = (*param_4)(param_5,local_38,6);
        if (iVar2 != 0) {
          uVar3 = 6;
          goto LAB_005b6488;
        }
      }
    }
    else {
      FUN_004aeb30(local_38,0x13,"\\W%08lX",param_1);
      iVar2 = (*param_4)(param_5,local_38,10);
      uVar3 = 10;
      if (iVar2 != 0) goto LAB_005b6488;
    }
  }
LAB_005b6598:
  uVar3 = 0xffffffff;
LAB_005b6488:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

