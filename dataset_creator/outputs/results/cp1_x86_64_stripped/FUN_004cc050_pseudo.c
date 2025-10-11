
void FUN_004cc050(code *param_1)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  uint uVar7;
  long in_FS_OFFSET;
  uint local_1170;
  undefined4 local_1168;
  byte local_1164 [4];
  undefined8 local_1160;
  char *local_1158;
  long local_1150;
  undefined1 local_1148 [256];
  undefined1 local_1048 [4104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1160 = 0;
  local_1158 = (char *)0x0;
  local_1150 = 0;
LAB_004cc0c8:
  do {
    uVar3 = FUN_0051e8c0(&local_1160,&local_1168,&local_1158,&local_1150,local_1164);
    if (uVar3 == 0) goto LAB_004cc1a9;
    pcVar4 = (char *)FUN_0051dd60(uVar3);
    pcVar1 = local_1158;
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "(unknown function)";
      if (local_1158 != (char *)0x0) {
        pcVar4 = pcVar1;
      }
    }
    else if (((local_1158 != (char *)0x0) && (*local_1158 != '\0')) &&
            (iVar2 = thunk_FUN_00712780(local_1158,"(unknown function)"), iVar2 != 0)) {
      pcVar4 = pcVar1;
    }
    uVar7 = (uint)uVar3;
    if ((uVar3 & 0x80000000) == 0) {
      puVar5 = (undefined1 *)FUN_0051de20(uVar3);
      if (puVar5 == (undefined1 *)0x0) {
        local_1170 = uVar7 & 0x7fffff;
LAB_004cc207:
        puVar5 = local_1148;
        FUN_004aeb30(puVar5,0x100,"reason(%lu)",local_1170);
      }
    }
    else {
      puVar5 = local_1148;
      local_1170 = uVar7 & 0x7fffffff;
      iVar2 = FUN_0041c9a0(uVar7 & 0x7fffffff,puVar5,0x100);
      if (iVar2 == 0) goto LAB_004cc207;
    }
    if ((local_1150 == 0) || ((local_1164[0] & 2) == 0)) {
      FUN_004aeb30(local_1048,0x1000,&DAT_007e3d61,puVar5);
    }
    else {
      FUN_004aeb30(local_1048,0x1000,"%s:%s",puVar5);
    }
    if (param_1 == (code *)0x0) {
      lVar6 = FUN_004b0cd0(PTR_DAT_0093e068,0);
      if (lVar6 != 0) {
        FUN_004cbf90(lVar6,pcVar4,local_1160,local_1168,3,local_1048);
        FUN_004ab560(lVar6);
      }
      goto LAB_004cc0c8;
    }
    iVar2 = (*param_1)(pcVar4,local_1160,local_1168,3,local_1048);
    if (iVar2 < 1) {
LAB_004cc1a9:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
  } while( true );
}

