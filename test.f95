PROGRAM TriangleAreaCalculation
  IMPLICIT NONE
  REAL :: base, height, area1, area2

  ! Prompt the user for input
  PRINT *, "Enter the base and height of the triangle:"
  READ *, base, height

  ! Calculate area using subroutine
  CALL CalculateAreaSubroutine(base, height, area1)


  ! Display results
  PRINT *, "Area calculated using subroutine: ", area1
  PRINT *, "Area calculated using function: ",  CalculateAreaFunction(base, height)

CONTAINS

  ! Subroutine to calculate area
  SUBROUTINE CalculateAreaSubroutine(b, h, area)
    REAL, INTENT(IN) :: b, h
    REAL, INTENT(OUT) :: area

    area = 0.5 * b * h
  END SUBROUTINE CalculateAreaSubroutine

  ! Function to calculate area
  REAL FUNCTION CalculateAreaFunction(b, h)
    REAL, INTENT(IN) :: b, h

    CalculateAreaFunction = 0.5 * b * h
  END FUNCTION CalculateAreaFunction

END PROGRAM TriangleAreaCalculation
