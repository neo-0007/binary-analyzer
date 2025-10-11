
undefined4 FUN_00422f70(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  long lVar5;
  undefined4 uVar6;
  
  iVar2 = FUN_00422c80();
  if (iVar2 != 0) {
    puVar3 = (uint *)FUN_0041ad90(0x18,"../crypto/objects/o_names.c",200);
    if (puVar3 != (uint *)0x0) {
      *(undefined8 *)(puVar3 + 2) = param_1;
      uVar1 = DAT_0093fd20;
      *(undefined8 *)(puVar3 + 4) = param_3;
      puVar3[1] = param_2 & 0x8000;
      *puVar3 = param_2 & 0xffff7fff;
      iVar2 = FUN_004222c0(uVar1);
      if (iVar2 != 0) {
        piVar4 = (int *)FUN_005457f0(DAT_0093fd28,puVar3);
        if (piVar4 == (int *)0x0) {
          uVar6 = 1;
          iVar2 = FUN_00545d90(DAT_0093fd28);
          if (iVar2 != 0) {
            uVar6 = 0;
            FUN_0041ad60(puVar3,"../crypto/objects/o_names.c",0xe7);
          }
        }
        else {
          if (DAT_0093fd18 != 0) {
            iVar2 = FUN_00436480();
            if (*piVar4 < iVar2) {
              lVar5 = FUN_004364a0(DAT_0093fd18);
              (**(code **)(lVar5 + 0x10))
                        (*(undefined8 *)(piVar4 + 2),*piVar4,*(undefined8 *)(piVar4 + 4));
            }
          }
          uVar6 = 1;
          FUN_0041ad60(piVar4,"../crypto/objects/o_names.c",0xe3);
        }
        FUN_004222e0(DAT_0093fd20);
        return uVar6;
      }
      FUN_0041ad60(puVar3,"../crypto/objects/o_names.c",0xd2);
      return 0;
    }
  }
  return 0;
}

