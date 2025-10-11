
int FUN_00422cb0(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  iVar2 = FUN_00422c80();
  if ((iVar2 == 0) || (iVar2 = FUN_004222c0(DAT_0093fd20), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    if ((DAT_0093fd18 == 0) && (DAT_0093fd18 = FUN_00436410(), DAT_0093fd18 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = DAT_0093b1f8;
      DAT_0093b1f8 = DAT_0093b1f8 + 1;
      iVar3 = FUN_00436480(DAT_0093fd18);
      if (iVar3 < DAT_0093b1f8) {
        do {
          puVar5 = (undefined8 *)FUN_0041aec0(0x18,"../crypto/objects/o_names.c",0x5a);
          lVar1 = DAT_0093fd18;
          if (puVar5 == (undefined8 *)0x0) {
            FUN_0051f420();
            iVar2 = 0;
            FUN_0051f540("../crypto/objects/o_names.c",0x5c,"OBJ_NAME_new_index");
            FUN_0051f8f0(8,0xc0100,0);
            goto LAB_00422dc5;
          }
          *puVar5 = FUN_00545cc0;
          puVar5[1] = FUN_0041c9c0;
          iVar4 = FUN_00435f80(lVar1,puVar5);
          if (iVar4 == 0) {
            FUN_0051f420();
            iVar2 = 0;
            FUN_0051f540("../crypto/objects/o_names.c",0x65,"OBJ_NAME_new_index");
            FUN_0051f8f0(8,0xc0100,0);
            FUN_0041ad60(puVar5,"../crypto/objects/o_names.c",0x66);
            goto LAB_00422dc5;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < DAT_0093b1f8);
      }
      plVar6 = (long *)FUN_004364a0(DAT_0093fd18,iVar2);
      if (param_1 != 0) {
        *plVar6 = param_1;
      }
      if (param_2 != 0) {
        plVar6[1] = param_2;
      }
      if (param_3 != 0) {
        plVar6[2] = param_3;
      }
    }
LAB_00422dc5:
    FUN_004222e0(DAT_0093fd20);
  }
  return iVar2;
}

