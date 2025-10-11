
undefined8 FUN_0052fde0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  lVar2 = FUN_004098f0();
  iVar1 = FUN_0040a180(param_1);
  iVar1 = FUN_004c7580(param_2,iVar1 * 8,lVar2);
  if (iVar1 < 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/e_camellia.c",0xc9,"camellia_init_key");
    FUN_0051f8f0(6,0x9d,0);
    return 0;
  }
  uVar3 = FUN_00409860(param_1);
  iVar1 = FUN_0040a4b0(uVar3);
  pcVar4 = (code *)0x0;
  if (iVar1 - 1U < 2) {
    if (param_4 == 0) {
      *(code **)(lVar2 + 0x118) = FUN_004c7600;
      if (iVar1 == 2) {
        pcVar4 = FUN_004c7280;
      }
      else {
        pcVar4 = (code *)0x0;
      }
      *(code **)(lVar2 + 0x120) = pcVar4;
      return 1;
    }
    if (iVar1 == 2) {
      pcVar4 = FUN_004c7280;
    }
  }
  *(code **)(lVar2 + 0x120) = pcVar4;
  *(code **)(lVar2 + 0x118) = FUN_004c75e0;
  return 1;
}

