
undefined8 FUN_0043d980(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043b840();
  if (((iVar1 != 0) && (param_1 != (undefined8 *)0x0)) && (param_2 != 0)) {
    iVar1 = FUN_005b1e50(*param_1,param_2,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_0042bcf0(param_2);
      if (iVar1 != 0) {
        FUN_0042b980(param_1[1]);
        *(undefined4 *)((long)param_1 + 0x14) = param_4;
        param_1[1] = param_2;
        *(undefined4 *)(param_1 + 8) = 1;
        iVar1 = FUN_0042c5e0(param_2,0xf000);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 2) = 1;
          uVar2 = FUN_0043cd30(param_1,param_3);
          return uVar2;
        }
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/asymciphers/rsa_enc.c",0x78,"rsa_init");
        FUN_0051f8f0(0x39,0xc0103,0);
      }
    }
  }
  return 0;
}

