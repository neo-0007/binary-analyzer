
void * UI_add_user_data(UI *ui,void *user_data)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = *(uint *)(ui + 0x28);
  pvVar2 = *(void **)(ui + 0x10);
  if ((uVar1 & 2) != 0) {
    (**(code **)(*(long *)ui + 0x38))(ui,pvVar2);
    uVar1 = *(uint *)(ui + 0x28);
    pvVar2 = (void *)0x0;
  }
  *(void **)(ui + 0x10) = user_data;
  *(uint *)(ui + 0x28) = uVar1 & 0xfffffffd;
  return pvVar2;
}

