
byte * FUN_006fd920(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  long lVar2;
  undefined *puVar3;
  
  pbVar1 = (byte *)FUN_007101b0(0x1d8);
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = (byte *)0x0;
  }
  else {
    *(byte **)(pbVar1 + 0x88) = pbVar1 + 0xe0;
    FUN_00707490(pbVar1,0,0,pbVar1 + 0xf0,&DAT_0093f2e0);
    *(undefined **)(pbVar1 + 0xd8) = &DAT_0093f5e0;
    FUN_00704d80(pbVar1);
    lVar2 = FUN_00705260(pbVar1,param_1,param_2,param_3);
    if (lVar2 == 0) {
      FUN_007061c0(pbVar1);
      FUN_007104f0(pbVar1);
      return (byte *)0x0;
    }
    if (((pbVar1[0x74] & 1) != 0) && ((*pbVar1 & 8) != 0)) {
      puVar3 = &DAT_0093f460;
      if (0 < *(int *)(pbVar1 + 0xc0)) {
        puVar3 = &DAT_0093f160;
      }
      *(undefined **)(pbVar1 + 0xd8) = puVar3;
      *(undefined **)(*(long *)(pbVar1 + 0xa0) + 0xe0) = &DAT_0093f160;
    }
  }
  return pbVar1;
}

