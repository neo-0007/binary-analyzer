
void __register_frame(int *param_1)

{
  void *pvVar1;
  
  if (*param_1 == 0) {
    return;
  }
  pvVar1 = malloc(0x30);
  __register_frame_info_bases(param_1,pvVar1,0,0);
  return;
}

