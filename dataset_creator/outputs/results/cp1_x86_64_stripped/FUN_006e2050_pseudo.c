
void FUN_006e2050(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long in_FS_OFFSET;
  
  PTR_DAT_0093da28 = (undefined *)(*(long *)(PTR_PTR_0093d9c0 + 0x40) + 0x100);
  puVar1 = (undefined *)(*(long *)(PTR_PTR_0093d9c0 + 0x58) + 0x200);
  puVar2 = (undefined *)(*(long *)(PTR_PTR_0093d9c0 + 0x48) + 0x200);
  PTR_DAT_0093da30 = puVar1;
  PTR_DAT_0093da38 = puVar2;
  if (*(undefined ***)(in_FS_OFFSET + -0x78) != &PTR_PTR_0093d9c0) {
    return;
  }
  *(undefined **)(in_FS_OFFSET + -0x40) = PTR_DAT_0093da28;
  *(undefined **)(in_FS_OFFSET + -0x48) = puVar2;
  *(undefined **)(in_FS_OFFSET + -0x50) = puVar1;
  return;
}

