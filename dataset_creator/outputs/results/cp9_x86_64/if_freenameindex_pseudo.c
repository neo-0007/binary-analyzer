
void if_freenameindex(if_nameindex *__ptr)

{
  if_nameindex *piVar1;
  
  for (piVar1 = __ptr; (piVar1->if_name != (char *)0x0 || (piVar1->if_index != 0));
      piVar1 = piVar1 + 1) {
    free(piVar1->if_name);
  }
  free(__ptr);
  return;
}

