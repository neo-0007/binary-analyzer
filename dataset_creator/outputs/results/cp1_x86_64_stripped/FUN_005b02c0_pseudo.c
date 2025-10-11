
bool FUN_005b02c0(undefined4 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *param_2;
  switch(param_1) {
  default:
    return true;
  case 1:
    break;
  case 3:
    FUN_00419990(3,lVar1,lVar1 + 200);
    FUN_005b0960(*(undefined8 *)(lVar1 + 0x150));
    thunk_FUN_004a2270(*(undefined8 *)(lVar1 + 0xf8));
    FUN_0060a160(*(undefined8 *)(lVar1 + 0x100));
    FUN_0060e150(*(undefined8 *)(lVar1 + 0x110));
    FUN_00605f70(*(undefined8 *)(lVar1 + 0x108));
    FUN_0060e7a0(*(undefined8 *)(lVar1 + 0x118));
    FUN_006103a0(*(undefined8 *)(lVar1 + 0x120));
    FUN_00436430(*(undefined8 *)(lVar1 + 0x128),FUN_00607560);
    FUN_0060aeb0(*(undefined8 *)(lVar1 + 0x130));
    thunk_FUN_004a2270(*(undefined8 *)(lVar1 + 0x168));
    FUN_0041ad60(*(undefined8 *)(lVar1 + 0x178),"../crypto/x509/x_x509.c",0x62);
    return true;
  case 4:
    FUN_00419990(3,lVar1,lVar1 + 200);
    FUN_005b0960(*(undefined8 *)(lVar1 + 0x150));
    thunk_FUN_004a2270(*(undefined8 *)(lVar1 + 0xf8));
    FUN_0060a160(*(undefined8 *)(lVar1 + 0x100));
    FUN_0060e150(*(undefined8 *)(lVar1 + 0x110));
    FUN_00605f70(*(undefined8 *)(lVar1 + 0x108));
    FUN_0060e7a0(*(undefined8 *)(lVar1 + 0x118));
    FUN_006103a0(*(undefined8 *)(lVar1 + 0x120));
    FUN_00436430(*(undefined8 *)(lVar1 + 0x128),FUN_00607560);
    FUN_0060aeb0(*(undefined8 *)(lVar1 + 0x130));
    thunk_FUN_004a2270(*(undefined8 *)(lVar1 + 0x168));
    break;
  case 0xf:
    iVar2 = FUN_005b0240(lVar1,param_4[0x2e],param_4[0x2f]);
    return iVar2 != 0;
  case 0x10:
    *param_4 = *(undefined8 *)(lVar1 + 0x170);
    return true;
  case 0x11:
    *param_4 = *(undefined8 *)(lVar1 + 0x178);
    return true;
  }
  *(undefined4 *)(lVar1 + 0x160) = 0;
  *(undefined8 *)(lVar1 + 0x168) = 0;
  *(undefined8 *)(lVar1 + 0x150) = 0;
  *(undefined8 *)(lVar1 + 0xd8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0xe0) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  *(undefined8 *)(lVar1 + 0x120) = 0;
  *(undefined8 *)(lVar1 + 0x128) = 0;
  *(undefined8 *)(lVar1 + 0x130) = 0;
  iVar2 = FUN_004196b0(3,lVar1,lVar1 + 200);
  return iVar2 != 0;
}

