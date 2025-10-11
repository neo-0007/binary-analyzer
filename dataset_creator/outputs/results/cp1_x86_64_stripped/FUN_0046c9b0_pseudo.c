
int FUN_0046c9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                undefined8 param_5,long param_6,ulong param_7)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0053f310();
  if (iVar1 != 0) {
    uVar2 = FUN_0053f2f0(param_1);
    if (uVar2 != 0) {
      lVar3 = FUN_0053f1e0(param_1);
      if (lVar3 != 0) {
        if (param_4 != 0) {
          lVar4 = 0;
          iVar1 = FUN_0053f330(lVar3,param_4,param_5);
          if (iVar1 == 0) goto LAB_0046ca02;
        }
        while( true ) {
          iVar1 = FUN_0053f650(lVar3,local_88,&local_90,0x40);
          if (iVar1 == 0) break;
          FUN_0053f190(lVar3);
          lVar4 = FUN_0053f1e0(param_1);
          if (lVar4 == 0) goto LAB_0046c9fb;
          iVar1 = FUN_0053f330(lVar4,local_88,local_90);
          if (iVar1 == 0) {
LAB_0046cb18:
            lVar3 = 0;
            goto LAB_0046ca02;
          }
          if (param_7 <= uVar2) {
            if (param_4 != 0) {
              iVar1 = FUN_0053f330(lVar4,param_4,param_5);
              if (iVar1 == 0) goto LAB_0046cb18;
            }
            iVar1 = FUN_0053f650(lVar4,local_88,&local_90,0x40);
            lVar3 = 0;
            if (iVar1 != 0) {
              thunk_FUN_00713a50(param_6,local_88,param_7);
              iVar1 = 1;
              lVar3 = 0;
            }
            goto LAB_0046ca02;
          }
          lVar3 = FUN_0053f1e0(lVar4);
          if (lVar3 == 0) {
            iVar1 = 0;
            goto LAB_0046ca02;
          }
          if (param_4 != 0) {
            iVar1 = FUN_0053f330(lVar4,param_4,param_5);
            if (iVar1 == 0) {
              iVar1 = 0;
              goto LAB_0046ca02;
            }
          }
          iVar1 = FUN_0053f650(lVar4,param_6,0,param_7);
          if (iVar1 == 0) goto LAB_0046ca02;
          FUN_0053f190(lVar4);
          param_6 = param_6 + uVar2;
          param_7 = param_7 - uVar2;
        }
        lVar4 = 0;
        iVar1 = 0;
        goto LAB_0046ca02;
      }
    }
  }
LAB_0046c9fb:
  iVar1 = 0;
  lVar4 = 0;
  lVar3 = 0;
LAB_0046ca02:
  FUN_0053f190(lVar4);
  FUN_0053f190(lVar3);
  FUN_004227b0(local_88,0x40);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

