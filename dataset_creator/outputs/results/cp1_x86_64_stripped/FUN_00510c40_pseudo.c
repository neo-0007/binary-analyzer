
undefined8 FUN_00510c40(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = 0;
  if (param_1 != 0) {
    lVar2 = thunk_FUN_0041cdd0(param_2,&DAT_007ce5e4);
    if (param_3 == 0) {
      if (lVar2 != 0) {
LAB_00510ca6:
        local_38 = param_1 + 0x11;
        iVar1 = FUN_0041e150(lVar2,&local_38,0x39,&local_40);
        if ((iVar1 != 0) && (*(long *)(param_1 + 0x58) == local_40)) {
LAB_00510ccc:
          *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
          uVar3 = 1;
          goto LAB_00510d02;
        }
      }
    }
    else {
      lVar4 = thunk_FUN_0041cdd0(param_2,&DAT_007ce5df);
      if (lVar2 != 0 || lVar4 != 0) {
        if (lVar4 == 0) {
LAB_00510d4b:
          local_38 = param_1 + 0x11;
          if (lVar2 != 0) goto LAB_00510ca6;
          iVar1 = FUN_00510b60(param_1);
          if (iVar1 != 0) goto LAB_00510ccc;
        }
        else {
          iVar1 = FUN_0041e150(lVar4,param_1 + 0x50,*(undefined8 *)(param_1 + 0x58),&local_48);
          if (iVar1 != 0) {
            if (*(long *)(param_1 + 0x58) == local_48) goto LAB_00510d4b;
            FUN_0041c0b0(*(undefined8 *)(param_1 + 0x50),local_48,"../crypto/ec/ecx_backend.c",0x54)
            ;
            *(undefined8 *)(param_1 + 0x50) = 0;
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_00510d02:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

