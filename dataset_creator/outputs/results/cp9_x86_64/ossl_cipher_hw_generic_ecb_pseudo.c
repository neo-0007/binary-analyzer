
undefined8 ossl_cipher_hw_generic_ecb(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = param_1[5];
  if (uVar3 <= param_4) {
    uVar5 = param_1[0x16];
    if ((code *)param_1[1] == (code *)0x0) {
      uVar4 = 0;
      while( true ) {
        lVar1 = param_2 + uVar4;
        lVar2 = param_3 + uVar4;
        uVar4 = uVar4 + uVar3;
        (*(code *)*param_1)(lVar2,lVar1,uVar5);
        if (param_4 - uVar3 < uVar4) break;
        uVar5 = param_1[0x16];
      }
    }
    else {
      (*(code *)param_1[1])(param_3,param_2,param_4,uVar5,*(byte *)((long)param_1 + 0x3c) >> 1 & 1);
    }
  }
  return 1;
}

