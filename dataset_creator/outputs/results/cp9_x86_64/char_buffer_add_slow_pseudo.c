
void char_buffer_add_slow(undefined1 (*param_1) [16],undefined1 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  
  if (*(long *)*param_1 != 0) {
    lVar2 = *(long *)(*param_1 + 8);
    lVar3 = *(long *)param_1[1];
    cVar4 = __libc_scratch_buffer_grow_preserve();
    if (cVar4 == '\0') {
      *param_1 = (undefined1  [16])0x0;
    }
    else {
      puVar1 = (undefined1 *)(*(long *)param_1[1] + (lVar2 - lVar3));
      lVar2 = *(long *)(param_1[1] + 8);
      *(undefined1 **)*param_1 = puVar1 + 1;
      *(long *)(*param_1 + 8) = *(long *)param_1[1] + lVar2;
      *puVar1 = param_2;
    }
    return;
  }
  return;
}

