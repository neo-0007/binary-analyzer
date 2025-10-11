
long FUN_004d31a0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = FUN_004d5e70();
  lVar4 = lVar2;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_004d3180(0,param_2,param_3);
    if (puVar3 == (undefined8 *)0x0) {
      lVar4 = 0;
      FUN_004d5b70(lVar2);
    }
    else {
      if (param_1 != (long *)0x0) {
        FUN_004d5b70(*param_1);
        *param_1 = lVar2;
      }
      FUN_004d5fc0(lVar2,*puVar3,puVar3[1],puVar3[2]);
      FUN_00542040(lVar2 + 8,puVar3[3]);
      if (puVar3[4] != 0) {
        uVar1 = FUN_004b77c0(*(undefined8 *)(puVar3[4] + 8));
        FUN_005421b0(lVar2 + 8,*(undefined8 *)(*(int **)puVar3[4] + 2),(long)**(int **)puVar3[4],
                     uVar1);
        thunk_FUN_004a2270(*(undefined8 *)puVar3[4]);
        FUN_004b7fa0(*(undefined8 *)(puVar3[4] + 8));
        FUN_0041ad60(puVar3[4],"../crypto/dh/dh_asn1.c",0x7d);
        puVar3[4] = 0;
      }
      FUN_0041ad60(puVar3,"../crypto/dh/dh_asn1.c",0x81);
      FUN_004d6100(lVar2,0xf000);
      FUN_004d6120(lVar2,0x1000);
    }
  }
  return lVar4;
}

