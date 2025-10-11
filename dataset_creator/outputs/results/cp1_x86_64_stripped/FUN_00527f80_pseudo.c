
undefined4 FUN_00527f80(long param_1,long param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  
  lVar4 = FUN_004098f0();
  if (param_3 != (undefined8 *)0x0 || param_2 != 0) {
    if (param_2 != 0) {
      iVar3 = FUN_0040a180(param_1);
      iVar3 = iVar3 / 2;
      iVar1 = iVar3 * 8;
      if (param_4 == 0) {
        *(undefined8 *)(lVar4 + 0x210) = 0;
        lVar6 = param_2 + iVar3;
        if ((DAT_0094b59c._1_1_ & 2) != 0) {
          *(code **)(lVar4 + 0x210) = FUN_0049b570;
        }
        FUN_0048a8b0(param_2,iVar1,lVar4);
        pcVar5 = FUN_0048a530;
      }
      else {
        lVar6 = param_2 + iVar3;
        iVar3 = FUN_00422820(param_2,lVar6);
        if (iVar3 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/e_aes.c",0xc56,"aes_xts_init_key");
          FUN_0051f8f0(6,0xc0,0);
          return 0;
        }
        *(undefined8 *)(lVar4 + 0x210) = 0;
        if ((DAT_0094b59c._1_1_ & 2) != 0) {
          *(code **)(lVar4 + 0x210) = FUN_0049ada0;
        }
        FUN_0048a5f0(param_2,iVar1,lVar4);
        pcVar5 = FUN_00489fa0;
      }
      *(code **)(lVar4 + 0x200) = pcVar5;
      FUN_0048a5f0(lVar6,iVar1,lVar4 + 0xf8);
      *(code **)(lVar4 + 0x208) = FUN_00489fa0;
      *(long *)(lVar4 + 0x1f0) = lVar4;
    }
    if (param_3 != (undefined8 *)0x0) {
      *(long *)(lVar4 + 0x1f8) = lVar4 + 0xf8;
      uVar2 = param_3[1];
      *(undefined8 *)(param_1 + 0x28) = *param_3;
      *(undefined8 *)(param_1 + 0x30) = uVar2;
    }
  }
  return 1;
}

