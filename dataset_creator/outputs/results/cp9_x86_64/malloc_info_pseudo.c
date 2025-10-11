
undefined8 malloc_info(int param_1,FILE *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    if (__malloc_initialized == '\0') {
      ptmalloc_init_part_0();
    }
    fputs("<malloc version=\"1\">\n",param_2);
    uVar1 = __malloc_info_part_0(param_2);
    return uVar1;
  }
  return 0x16;
}

