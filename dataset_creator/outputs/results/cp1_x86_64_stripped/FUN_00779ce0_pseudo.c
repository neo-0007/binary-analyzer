
ulong FUN_00779ce0(int *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  
  if ((*param_1 != 1) && ((*param_1 == 2 || (cVar1 = FUN_00779830(), cVar1 == '\0')))) {
    return 0;
  }
  uVar4 = 0;
  uVar3 = 0x40;
  while (uVar5 = uVar3, uVar4 < uVar5) {
    while( true ) {
      uVar3 = uVar5 + uVar4 >> 1;
      iVar2 = thunk_FUN_00712780(param_2,"endaliasent" + uVar3 * 0x13);
      if (iVar2 < 0) break;
      if (iVar2 == 0) {
        return (*(ulong *)(param_1 + uVar3 * 2 + 2) >> 0x11 |
               *(ulong *)(param_1 + uVar3 * 2 + 2) << 0x2f) ^ *(ulong *)(in_FS_OFFSET + 0x30);
      }
      uVar4 = uVar3 + 1;
      if (uVar5 <= uVar4) goto LAB_00779d6e;
    }
  }
LAB_00779d6e:
                    /* WARNING: Subroutine does not return */
  FUN_006e2220("name_entry != NULL","nss_module.c",0x160,"__nss_module_get_function");
}

