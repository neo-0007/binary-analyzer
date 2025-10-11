
undefined4 _IO_wdefault_uflow(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = *(long *)(param_1 + 0xd8);
  if (0x827 < lVar2 - 0x932180U) {
    _IO_vtable_check();
  }
  iVar4 = (**(code **)(lVar2 + 0x20))(param_1);
  if (iVar4 != -1) {
    puVar3 = (undefined4 *)**(long **)(param_1 + 0xa0);
    uVar1 = *puVar3;
    **(long **)(param_1 + 0xa0) = (long)(puVar3 + 1);
    return uVar1;
  }
  return 0xffffffff;
}

