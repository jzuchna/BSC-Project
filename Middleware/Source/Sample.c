/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: Sample.c
 *
 * DESCRIPTION:
 *   This class represents a sample that was taken.
 *
 * PUBLIC FUNCTIONS:
 *   newSampler
 *   destroySampler
 ****************************************************************************/
#include "Sample.h"
#include <stdlib.h>


#ifndef SAMPLE_H
/****************************************************************************
 * SECTION: Include
 ****************************************************************************/
#include "HtlStdDef.h"
#include <time.h>
/****************************************************************************
 * SECTION: typedef
 ****************************************************************************/
typedef struct Sample {
	time_t Time;
	int aCiruitNumber;
	int WellPosX;
	int WellPosY;
}TSample;
#endif // !1

/****************************************************************************
 * FUNCTION: newSampler
 ****************************************************************************/
PUBLIC TSample *
newSampler (
  time_t aTimestamp,
  int    aX,
  int    aY,
  int    aCircuitNumber )
{
	TSample* retPtr = malloc(sizeof(TSample));

	retPtr->aCiruitNumber = aCircuitNumber;
	retPtr->Time = aTimestamp;
	retPtr->WellPosX = aX;
	retPtr->WellPosY = aY;

	return retPtr;
}

/****************************************************************************
 * FUNCTION: destroySampler
 ****************************************************************************/
PUBLIC void
destroySampler (
  TSample * aSample )
{
	if (aSample != NULL) {
		free(aSample);
	}
}