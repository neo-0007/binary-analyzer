
bool FUN_00560e50(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar2 = FUN_004239c0(param_2);
  if (param_2 - 0x15U < 6) {
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    switch(param_2) {
    case 0x15:
      lVar4 = FUN_004a7670();
      *(long *)(param_1 + 0x20) = lVar4;
      return lVar4 != 0;
    case 0x16:
      puVar3 = (undefined8 *)FUN_0055d850();
      *(undefined8 **)(param_1 + 0x20) = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        iVar1 = thunk_FUN_0049f880(*puVar3,1);
        if (iVar1 == 0) {
          FUN_0055d870(*(undefined8 *)(param_1 + 0x20));
          *(undefined8 *)(param_1 + 0x20) = 0;
        }
        return iVar1 != 0;
      }
      break;
    case 0x17:
      puVar3 = (undefined8 *)FUN_0055da30();
      *(undefined8 **)(param_1 + 0x20) = puVar3;
      if ((puVar3 != (undefined8 *)0x0) && (iVar1 = thunk_FUN_0049f880(*puVar3,0), iVar1 != 0)) {
        puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10);
        uVar2 = FUN_004239c0(0x15);
        *puVar3 = uVar2;
        return true;
      }
      break;
    case 0x18:
      puVar3 = (undefined8 *)FUN_0055dc10();
      *(undefined8 **)(param_1 + 0x20) = puVar3;
      if ((puVar3 != (undefined8 *)0x0) && (iVar1 = thunk_FUN_0049f880(*puVar3,1), iVar1 != 0)) {
        puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x28);
        uVar2 = FUN_004239c0(0x15);
        *puVar3 = uVar2;
        return true;
      }
      break;
    case 0x19:
      puVar3 = (undefined8 *)FUN_0055dd50();
      *(undefined8 **)(param_1 + 0x20) = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        iVar1 = thunk_FUN_0049f880(*puVar3,0);
        return iVar1 != 0;
      }
      break;
    case 0x1a:
      puVar3 = (undefined8 *)FUN_0055dcb0();
      *(undefined8 **)(param_1 + 0x20) = puVar3;
      if ((puVar3 != (undefined8 *)0x0) && (iVar1 = thunk_FUN_0049f880(*puVar3,0), iVar1 != 0)) {
        puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 8);
        uVar2 = FUN_004239c0(0x15);
        *puVar3 = uVar2;
        return true;
      }
    }
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0xad,"PKCS7_set_type");
    FUN_0051f8f0(0x21,0x70,0);
  }
  return false;
}

