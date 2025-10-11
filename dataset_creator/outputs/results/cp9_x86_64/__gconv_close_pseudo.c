
void __gconv_close(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  puVar3 = param_1 + 2;
  do {
    do {
      puVar4 = puVar3;
      if ((*(byte *)(puVar4 + 2) & 1) != 0) goto LAB_006c968d;
      puVar3 = puVar4 + 6;
    } while ((void *)*puVar4 == (void *)0x0);
    free((void *)*puVar4);
  } while ((*(byte *)(puVar4 + 2) & 1) == 0);
LAB_006c968d:
  free(param_1);
  __gconv_close_transform(uVar1,uVar2);
  return;
}

