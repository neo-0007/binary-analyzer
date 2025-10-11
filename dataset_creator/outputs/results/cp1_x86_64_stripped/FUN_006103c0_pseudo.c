
long * FUN_006103c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long in_FS_OFFSET;
  long *local_60;
  undefined1 local_58 [8];
  long local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (long *)FUN_00610380();
  if (local_60 == (long *)0x0) {
LAB_00610588:
    puVar2 = (undefined8 *)0x0;
LAB_00610515:
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_ncons.c",0xa5,"v2i_NAME_CONSTRAINTS");
    FUN_0051f8f0(0x22,0xc0100,0);
LAB_00610545:
    FUN_006103a0(local_60);
    FUN_00610360(puVar2);
    local_60 = (long *)0x0;
  }
  else {
    iVar5 = 0;
    while( true ) {
      iVar1 = FUN_00436480(param_3);
      if (iVar1 <= iVar5) break;
      lVar4 = FUN_004364a0(param_3,iVar5);
      lVar3 = *(long *)(lVar4 + 8);
      iVar1 = thunk_FUN_00712ab0(lVar3,"permitted",9);
      if ((iVar1 == 0) && (*(char *)(lVar3 + 9) != '\0')) {
        local_50 = lVar3 + 10;
        plVar6 = local_60;
      }
      else {
        iVar1 = thunk_FUN_00712ab0(lVar3,"excluded",8);
        if ((iVar1 != 0) || (*(char *)(lVar3 + 8) == '\0')) {
          FUN_0051f420();
          puVar2 = (undefined8 *)0x0;
          FUN_0051f540("../crypto/x509/v3_ncons.c",0x92,"v2i_NAME_CONSTRAINTS");
          FUN_0051f8f0(0x22,0x8f,0);
          goto LAB_00610545;
        }
        local_50 = lVar3 + 9;
        plVar6 = local_60 + 1;
      }
      local_48 = *(undefined8 *)(lVar4 + 0x10);
      puVar2 = (undefined8 *)FUN_00610340();
      if (puVar2 == (undefined8 *)0x0) goto LAB_00610588;
      lVar3 = FUN_00612c40(*puVar2,param_1,param_2,local_58,1);
      if (lVar3 == 0) goto LAB_00610545;
      lVar3 = *plVar6;
      if (lVar3 == 0) {
        lVar3 = FUN_00436410();
        *plVar6 = lVar3;
        if (lVar3 == 0) goto LAB_00610515;
      }
      iVar1 = FUN_00435f80(lVar3,puVar2);
      if (iVar1 == 0) goto LAB_00610515;
      iVar5 = iVar5 + 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

