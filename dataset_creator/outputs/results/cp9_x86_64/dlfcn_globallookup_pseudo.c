
undefined8 dlfcn_globallookup(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = dlopen(0,1);
  if (lVar1 != 0) {
    uVar2 = dlsym(lVar1,param_1);
    dlclose(lVar1);
  }
  return uVar2;
}

