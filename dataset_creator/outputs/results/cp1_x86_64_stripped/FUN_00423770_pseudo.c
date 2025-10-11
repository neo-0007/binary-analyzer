
undefined4 FUN_00423770(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long in_FS_OFFSET;
  long local_58 [5];
  long local_30;
  
  plVar7 = local_58;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  if (DAT_0093fd30 == 0) {
    DAT_0093fd30 = FUN_00545610(FUN_00423520,FUN_00423480);
    uVar3 = 0;
    if (DAT_0093fd30 == 0) goto LAB_004238ac;
    plVar4 = (long *)FUN_00424a40(param_1);
    if (plVar4 == (long *)0x0) goto LAB_004239ac;
LAB_004237d8:
    local_58[3] = FUN_0041ad90(0x10,"../crypto/objects/obj_dat.c",0xb9);
    lVar6 = local_58[3];
    if (local_58[3] != 0) {
      if ((*(int *)((long)plVar4 + 0x14) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
        lVar6 = FUN_0041ad90(0x10,"../crypto/objects/obj_dat.c",0xbc);
        local_58[0] = lVar6;
        if (lVar6 == 0) goto LAB_00423900;
      }
      if (*plVar4 != 0) {
        local_58[1] = FUN_0041ad90(0x10,"../crypto/objects/obj_dat.c",0xbf);
        lVar6 = local_58[0];
        if (local_58[1] == 0) goto LAB_00423900;
      }
      if (plVar4[1] != 0) {
        local_58[2] = FUN_0041ad90(0x10,"../crypto/objects/obj_dat.c",0xc2);
        lVar6 = local_58[0];
        if (local_58[2] == 0) goto LAB_00423900;
      }
      lVar6 = 0;
      do {
        puVar1 = (undefined4 *)local_58[lVar6];
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = (int)lVar6;
          lVar2 = DAT_0093fd30;
          *(long **)(puVar1 + 2) = plVar4;
          uVar5 = FUN_005457f0(lVar2);
          FUN_0041ad60(uVar5,"../crypto/objects/obj_dat.c",0xcb);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 4);
      *(uint *)(plVar4 + 4) = *(uint *)(plVar4 + 4) & 0xfffffff2;
      uVar3 = (undefined4)plVar4[2];
      goto LAB_004238ac;
    }
LAB_00423900:
    FUN_0051f420();
    FUN_0051f540("../crypto/objects/obj_dat.c",0xd4,"OBJ_add_object");
    FUN_0051f8f0(8,0xc0100,0);
  }
  else {
    plVar4 = (long *)FUN_00424a40(param_1);
    if (plVar4 != (long *)0x0) goto LAB_004237d8;
LAB_004239ac:
    lVar6 = 0;
  }
  while( true ) {
    plVar7 = plVar7 + 1;
    FUN_0041ad60(lVar6,"../crypto/objects/obj_dat.c",0xd7);
    if (local_58 + 4 == plVar7) break;
    lVar6 = *plVar7;
  }
  FUN_004a06b0(plVar4);
  uVar3 = 0;
LAB_004238ac:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

