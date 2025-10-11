
long __deregister_frame_info_bases(int *param_1)

{
  long lVar1;
  int *__ptr;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)object_mutex);
  if (unseen_objects != 0) {
    plVar4 = &unseen_objects;
    lVar2 = unseen_objects;
    do {
      lVar1 = *(long *)(lVar2 + 0x28);
      if (param_1 == *(int **)(lVar2 + 0x18)) {
        *plVar4 = lVar1;
        goto LAB_006c5e4d;
      }
      plVar4 = (long *)(lVar2 + 0x28);
      lVar2 = lVar1;
    } while (lVar1 != 0);
  }
  if (seen_objects != 0) {
    puVar3 = &seen_objects;
    lVar2 = seen_objects;
    do {
      __ptr = *(int **)(lVar2 + 0x18);
      if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
        if (param_1 == __ptr) {
          *puVar3 = *(undefined8 *)(lVar2 + 0x28);
          goto LAB_006c5e4d;
        }
      }
      else if (param_1 == *(int **)__ptr) {
        *puVar3 = *(undefined8 *)(lVar2 + 0x28);
        free(__ptr);
LAB_006c5e4d:
        pthread_mutex_unlock((pthread_mutex_t *)object_mutex);
        return lVar2;
      }
      puVar3 = (undefined8 *)(lVar2 + 0x28);
      lVar2 = *(long *)(lVar2 + 0x28);
    } while (lVar2 != 0);
  }
  pthread_mutex_unlock((pthread_mutex_t *)object_mutex);
                    /* WARNING: Subroutine does not return */
  abort();
}

