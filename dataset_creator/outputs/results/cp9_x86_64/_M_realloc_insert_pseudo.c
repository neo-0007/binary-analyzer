
/* std::vector<std::Catalog_info*, std::allocator<std::Catalog_info*>
   >::_M_realloc_insert(__gnu_cxx::__normal_iterator<std::Catalog_info**,
   std::vector<std::Catalog_info*, std::allocator<std::Catalog_info*> > >, std::Catalog_info*
   const&) */

void __thiscall
std::vector<std::Catalog_info*,std::allocator<std::Catalog_info*>>::_M_realloc_insert
          (vector<std::Catalog_info*,std::allocator<std::Catalog_info*>> *this,void *param_2,
          undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  ulong uVar3;
  void *__dest_00;
  ulong uVar4;
  size_t __n;
  long lVar5;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    __throw_length_error("vector::_M_realloc_insert");
  }
  uVar4 = 1;
  if (uVar2 != 0) {
    uVar4 = uVar2;
  }
  uVar3 = uVar2 + uVar4;
  __n = (long)param_2 - (long)__src;
  if (CARRY8(uVar2,uVar4)) {
    uVar3 = 0x7ffffffffffffff8;
LAB_006aecfa:
    __dest_00 = operator_new(uVar3);
    lVar5 = uVar3 + (long)__dest_00;
  }
  else {
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_006aecfa;
    }
    lVar5 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if (param_2 == __src) {
    if (param_2 != pvVar1) goto LAB_006aec8d;
LAB_006aeca3:
    if (__src == (void *)0x0) goto LAB_006aeca8;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (param_2 != pvVar1) {
LAB_006aec8d:
      memcpy(__dest,param_2,(long)pvVar1 - (long)param_2);
      goto LAB_006aeca3;
    }
  }
  operator_delete(__src);
LAB_006aeca8:
  *(void **)this = __dest_00;
  *(long *)(this + 8) = (long)__dest + ((long)pvVar1 - (long)param_2);
  *(long *)(this + 0x10) = lVar5;
  return;
}

