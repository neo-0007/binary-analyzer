
undefined4 FUN_00528150(long param_1,long param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  
  lVar3 = FUN_004098f0();
  if (param_3 != (undefined8 *)0x0 || param_2 != 0) {
    if (param_2 != 0) {
      uVar4 = FUN_0040a180(param_1);
      iVar7 = (int)(((uint)(uVar4 >> 0x1f) & 1) + (int)uVar4) >> 1;
      iVar1 = iVar7 * 8;
      if (param_4 == 0) {
        lVar8 = iVar7 + param_2;
        FUN_00498be0(param_2,iVar1,lVar3);
        pcVar6 = FUN_00494f10;
        pcVar5 = FUN_00496e80;
      }
      else {
        lVar8 = param_2 + iVar7;
        iVar7 = FUN_00422820(param_2,lVar8);
        if (iVar7 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/e_aes.c",0x119,"aesni_xts_init_key");
          FUN_0051f8f0(6,0xc0,0);
          return 0;
        }
        FUN_00498c50(param_2,iVar1,lVar3);
        pcVar6 = FUN_00494ec0;
        pcVar5 = FUN_00496710;
      }
      *(code **)(lVar3 + 0x200) = pcVar6;
      *(code **)(lVar3 + 0x210) = pcVar5;
      FUN_00498c50(lVar8,iVar1,lVar3 + 0xf8);
      *(code **)(lVar3 + 0x208) = FUN_00494ec0;
      *(long *)(lVar3 + 0x1f0) = lVar3;
    }
    if (param_3 != (undefined8 *)0x0) {
      *(long *)(lVar3 + 0x1f8) = lVar3 + 0xf8;
      uVar2 = param_3[1];
      *(undefined8 *)(param_1 + 0x28) = *param_3;
      *(undefined8 *)(param_1 + 0x30) = uVar2;
    }
  }
  return 1;
}

